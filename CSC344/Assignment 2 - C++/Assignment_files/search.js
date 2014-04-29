   var nwok = null
   var nwptr = null
   function nop() {}
   function set_params(form)
   {
     if (form.nw.checked) {
       nwok = "yes"
     } else {
       nwok = null
     }
   }
   function odjump(uri)
   {
      var url = null
      if (uri == "null") { return }
      if (uri.substr(0,5) == "http:") {
         url = uri
      }
      else {
         url = uri
      }
      if (url != null) {
         if (nwok != null) {
            if (nwptr == null || nwptr.closed) {
               nwptr = window.open(url,"newwin")
            }
            else {
               nwptr.location.href = url
            }
            nwptr.focus()
         }
         else {
            this.parent.top.location.href = url
         }
      }
   }

   var word = null

   var words = new Array(
   "abstemious", "abulia", "acedia", "acolyte", "adjure", "adumbrate",
   "anabasis", "animadversion", "apodictic", "aposiopesis", "apothegm",
   "baldachin", "banausic", "bardolater", "Barmecidal", "cacography",
   "calumny", "cap-a-pie", "casus belli", "chiasmus", "Chinese wall",
   "chrestomathy", "consigliere", "daedal", "desuetude", "eau-de-vie",
   "eclaircissement", "edulcorate", "epigraph", "epitaph", "epithet",
   "eschatology", "etiology", "exegesis", "ex officio", "factotum",
   "golconda", "gravamen", "hermeneutics", "ineluctable",
   "insouciance", "interdigitate", "incarnadine", "kakistocracy",
   "lachrymose", "lacuna", "lagniappe", "Laodicean", "legerity",
   "litterateur", "louche", "Lucullan", "macedoine", "mahatma",
   "marmoreal", "mise-en-scene", "neologism", "non compos mentis",
   "obeisance", "oubliette", "obloquy", "omphaloskepsis",
   "palimpsest", "plebiscite", "plus a change", "pons asinorum",
   "predial", "primordial", "pseudonym", "pullulate", "punctilio",
   "quadrivium", "qui vive", "quidnunc", "rechauffe", "rete",
   "sanguineous", "sardonic", "sartorial", "sciolism", "semiotic",
   "simulacrum", "solipsism", "soporific", "sternutation", "stoic",
   "stultify", "syncretism", "taradiddle", "tonsorial", "trivium",
   "trope", "ukase", "vinaceous", "voluble", "weltanschauung",
   "williwaw", "zibeline")

   function initWord()
   {
      var i = 0
      if (word == null) {
         i = Math.floor(words.length*Math.random())
         word = words[i]
      }
      document.mwdic.va.value = word
   }

   function mwjump(form)
   {
      var cgi = null
      var book = form.mwbook.options[form.mwbook.selectedIndex].value
      var va = form.va.value
      if (book == "dic") { cgi = "dictionary"; book = "bookd" }
      else if (book == "the") { cgi = "thesaurus"; book = "bookt" }
      else { /* alert("error"); */ return }

      var url = "http://www.m-w.com/"
      if (va != null && va != "") {
         url +=  cgi + '/' + va
      }
      if (nwok != null) {
         if (nwptr == null || nwptr.closed) {
            nwptr = window.open(url,"newwin")
         }
         else {
            nwptr.location.href = url
         }
         nwptr.focus()
      }
      else {
         this.parent.top.location.href = url
      }

   }

