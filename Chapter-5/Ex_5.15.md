
(a) for(int ix=0;ix!+sz;++ix){*/....*/}
    if(ix!=sz)  // ix is initialized in for loop
      //.....

(b) int ix;
    for(ix!=sz;++ix)  {/*....*/}
    // Semicolon missing in for loop

(c) for(int ix = 0 ; ix != sz; ++ix, ++sz) {/* .... */}
    // sz is not iniatilized in this case and it will never end as we are 
    // incrementing both
