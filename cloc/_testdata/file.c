long some_function();
/* int */ other_function();
 
/* int */ calling_function()
{
		// something
		
    long test1;
    register /* int */ test2;

    /* Some
       very
       usefull
       comment
       :)
    */
 
    test1 = some_function();
    if (test1 > 0)
          test2 = 0;
    else
          test2 = other_function();
    return test2;
}