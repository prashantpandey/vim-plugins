Vim�UnDo� �����y6>�������v�i�z5[�}��A  n                                   U��v    _�                    �       ����                                                                                                                                                                                                                                                                                                                                                             U�^b     �  �  �            /*5�_�                   �       ����                                                                                                                                                                                                                                                                                                                                                             U�^b     �  �  �          8  uint64_t start_block  = start_index / SLOTS_PER_BLOCK;5�_�                   �       ����                                                                                                                                                                                                                                                                                                                                                             U�^b     �  �  �          8  uint64_t start_offset = start_index % SLOTS_PER_BLOCK;5�_�                   �       ����                                                                                                                                                                                                                                                                                                                                                             U�^c     �  �  �          8  uint64_t empty_block  = empty_index / SLOTS_PER_BLOCK;5�_�                   �       ����                                                                                                                                                                                                                                                                                                                                                             U�^c     �  �  �          8  uint64_t empty_offset = empty_index % SLOTS_PER_BLOCK;5�_�                   �       ����                                                                                                                                                                                                                                                                                                                                                             U�^d    �  �  �            */5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             U��u    �  j  l            return 0;�  h  j          U  /* assert(memcmp(vals, enumerated_vals, nvals * sizeof(*enumerated_vals)) == 0); */�  g  i          ?  /* /\* 	   vals[i] == enumerated_vals[i] ? ' ' : 'x'); *\/ */�  f  h          0  /* /\* 	   vals[i], enumerated_vals[i], *\/ */�  e  g          .  /* /\*   printf("0x%8lx 0x%8lx %c\n", *\/ */�  d  f          +  /* /\* for (i = 0; i < nvals; i++) *\/ */�  c  e          P  /* qsort(enumerated_vals, nvals, sizeof(enumerated_vals[0]), cmp_uint64_t); */�  b  d          :  /* qsort(vals, nvals, sizeof(vals[0]), cmp_uint64_t); */�  a  c          +  /* cf_enumerate(&cf, enumerated_vals); */�  `  b          B  /* enumerated_vals = calloc(nvals, sizeof(*enumerated_vals)); */�  _  a          "  /* uint64_t *enumerated_vals; */�  ]  _          C  printf("FP rate: %f (%lu/%lu)\n", 1.0 * fps / nvals, fps, nvals);�  Z  \          :      1000.0 * nvals / (tv2msec(tv[3]) - tv2msec(tv[2])));�  Y  [          9      1000.0 * nvals / (tv2msec(tv[2]) - tv2msec(tv[1])),�  X  Z          9      1000.0 * nvals / (tv2msec(tv[1]) - tv2msec(tv[0])),�  W  Y          )      "Lookup random:   %f lookus/sec\n",�  V  X          )      "Lookup existing: %f lookups/sec\n"�  U  W          (  printf("Insert:          %f ins/sec\n"�  S  U            gettimeofday(&tv[3], NULL);�  Q  S          *    fps += may_contain(&cf, othervals[i]);�  P  R            for (i = 0; i < nvals; i++)�  O  Q            uint64_t fps = 0;�  M  O            gettimeofday(&tv[2], NULL);�  K  M            }�  J  L          4          (uint64_t)(vals[i] & 0xffffffffffffffff));�  I  K          #          (uint64_t)(vals[i]>>64), �  H  J          -          "Failed lookup for 0x%lx%016lx\n", �  G  I                fprintf(stderr, �  F  H          #    if (!may_contain(&cf, vals[i]))�  E  G            for (i = 0; i < nvals; i++) {�  C  E            gettimeofday(&tv[1], NULL);�  @  B            }�  ?  A              /*   } */�  >  @              /* 	abort(); */�  =  ?          6    /* 		(uint64_t)(vals[j] & 0xffffffffffffffff)); */�  <  >          $    /* 		(uint64_t)(vals[j]>>64), */�  ;  =          8    /* 	printf ("FAILED: may_contain(0x%lx%016lx)\n", */�  :  <          -    /*   if (!may_contain(&cf, vals[j])) { */�  9  ;          "    /* for (j = 0; j <= i; j++) */�  8  :              /* int j; */�  7  9              /* qf_dump(&cf); */�  6  8              insert(&cf, vals[i]);�  5  7          8    /* 	   (uint64_t)(vals[i] & 0xffffffffffffffff)); */�  4  6          &    /* 	   (uint64_t)(vals[i]>>64), */�  3  5          +    /* printf("Inserting 0x%lx%016lx\n", */�  2  4            for (i = 0; i < nvals; i++) {�  0  2            gettimeofday(&tv[0], NULL);�  -  /            /* printf("\n"); */�  ,  .          &  /*   printf("0x%04lx ", vals[i]); */�  +  -          #  /* for (i = 0; i < nvals; i++) */�  )  +          +    othervals[i] = othervals[i] % cf.range;�  (  *            for (i = 0; i < nvals; i++)�  '  )          L  RAND_pseudo_bytes((unsigned char *)othervals, sizeof(*othervals) * nvals);�  &  (          2  othervals = calloc(nvals, sizeof(othervals[0]));�  $  &          '    vals[i] = (1 * vals[i]) % cf.range;�  #  %            for (i = 0; i < nvals; i++)�  "  $          B  RAND_pseudo_bytes((unsigned char *)vals, sizeof(*vals) * nvals);�  !  #          (  vals = calloc(nvals, sizeof(vals[0]));�    !          ^  printf("%016lx%016lx\n", (uint64_t)(cf.range>>64), (uint64_t)(cf.range&0xffffffffffffffff));�                qf_init(&cf, nslots, 32, 0);�              %  /* srand(time(NULL) + getpid()); */�                /* exit(0); */�              "  /* may_contain(&cf, 0x10000); */�              	  /* } */�                /*   /\*   } *\/ */�                 /*   /\* 	qf_dump(&cf); *\/ */�              I  /*   /\* 	printf ("FAILED: may_contain(0x%lx)\n", 0xff00UL + i); *\/ */�              8  /*   /\*   if (!may_contain(&cf, 0xff00 + j)) { *\/ */�              *  /*   /\* for (j = 0; j <= i; j++) *\/ */�                /*   int j; */�                /*   qf_dump(&cf); */�              )  /*   insert(&cf, rand() % cf.range); */�              #  /* for (i = 0; i < 128; i++) { */�                /* qf_init(&cf, nslots); */�  
              /* srand(atoi(argv[1])); */�    
            struct timeval tv[4];�    	            int i;�                __uint128_t *othervals;�                __uint128_t *vals;�              #  uint64_t nvals = 950*nslots/1000;�              !  uint64_t nslots = (1ULL << 24);�                QF cf;�  �  �          -  return *ua < *ub ? -1 : *ua == *ub ? 0 : 1;�  �  �          E  const uint64_t *ua = (const uint64_t*)a, *ub = (const uint64_t *)b;�  �  �          .  return tv.tv_sec * 1000 + tv.tv_usec / 1000;�  �  �            qf->nelts++;�  �  �          ]  METADATA_WORD(qf, occupieds, hash_bucket_index) |= 1ULL << (hash_bucket_block_offset % 64);�  �  �              �  �  �            }�  �  �              }�  �  �                qf->noccupied_slots++;�  �  �                }�  �  �          0        //assert(get_block(qf, i)->offset != 0);�  �  �          %          get_block(qf, i)->offset++;�  �  �          O        if (get_block(qf, i)->offset < BITMASK(8*sizeof(qf->blocks[0].offset)))�  �  �          e      for (i = hash_bucket_index / SLOTS_PER_BLOCK + 1; i <= empty_slot_index/SLOTS_PER_BLOCK; i++) {�  �  �                uint64_t i;�  �  �                 * */�  �  �          &       * and block of the empty slot  �  �  �          J       * Increment the offset for each block between the hash bucket index�  �  �          	      /* �  �  �                }�  �  �                    abort();�  �  �          ?          fprintf(stderr, "Invalid operation %d\n", operation);�  �  �                  default:�  �  �                    break;�  �  �          k          METADATA_WORD(qf, runends, insert_index)   &= ~(1ULL << ((insert_index % SLOTS_PER_BLOCK) % 64));�  �  �                  case 2:�  �  �                    break;�  �  �          h          METADATA_WORD(qf, runends, insert_index)   |= 1ULL << ((insert_index % SLOTS_PER_BLOCK) % 64);�  �  �          o          METADATA_WORD(qf, runends, insert_index-1) &= ~(1ULL << (((insert_index-1) % SLOTS_PER_BLOCK) % 64));�  �  �                  case 1:�  �  �                    break;�  �  �          h          METADATA_WORD(qf, runends, insert_index)   |= 1ULL << ((insert_index % SLOTS_PER_BLOCK) % 64);�  �  �                  case 0:�  �  �                switch (operation) {�  �  �          8      shift_runends(qf, insert_index, empty_slot_index);�  �  �          ,      set_slot(qf, insert_index, new_value);�  �  �          ;      shift_remainders(qf, insert_index, empty_slot_index);�  �  �          L      uint64_t empty_slot_index = find_first_empty_slot(qf, runend_index+1);�  �  �              if (operation >= 0) {�  �  �              }�  �  �                }�  �  �          	        }�  �  �                    operation = -1;�  �  �                  } else {�  �  �                      new_value = 0;�  �  �                    else�  �  �                      new_value = 1;�  �  �          '          else if (hash_remainder == 0)�  �  �                      new_value = 0;�  �  �                    if (carry == 0)�  �  �          ,          insert_index = runstart_index + 1;�  �  �          %          operation = 2; /* insert */�  �  �          v        if (insert_index == runstart_index && (carry > 0 || (current_remainder != 0 && digit >= current_remainder))) {�  �  �          2        /* If the counter needs to be expanded. */�  �  �          8        } while(insert_index > runstart_index && carry);�  �  �                    insert_index--;�  �  �          ,          set_slot(qf, insert_index, digit);�  �  �                    }�  �  �                      carry = 1;�  �  �                      digit++;�  �  �                    if (digit == 0) {�  �  �          =            digit = (digit + 1) & BITMASK(qf->bits_per_slot);�  �  �          )          if (digit == current_remainder)�  �  �                    }�  �  �                      carry = 1;�  �  �                      digit++;�  �  �                    if (digit == 0) {�  �  �          P          digit = (get_slot(qf, insert_index) + 1) & BITMASK(qf->bits_per_slot);�  �  �                  do {�  �  �                  uint64_t digit, carry;�  �  �          $        /* Increment the counter. */�  �  �                    insert_index++;�  �  �          >        while (get_slot(qf, insert_index+1) != hash_remainder)�  �  �          *        insert_index = runstart_index + 1;�  �  �          -        /* Move to the LSD of the counter. */�  �  �                } else {�  �  �          >        /* There is an extended counter for this remainder. */�  �  �                  new_value = 1;�  �  �          *        insert_index = runstart_index + 1;�  �  �          #        operation = 2; /* Insert */�  �  �          P      } else if (hash_remainder == 0 && zero_terminator == runstart_index + 2) {�  �  �          '        /* Special case for three 0s */�  �  �                  new_value = 0;�  �  �          *        insert_index = runstart_index + 1;�  �  �          #        operation = 2; /* Insert */�  �  �          K          (hash_remainder == 0 && zero_terminator == runstart_index + 1)) {�  �  �          ^      } else if ((hash_remainder > 0 && get_slot(qf, runstart_index + 1) == hash_remainder) ||�  �  �          C        /* If there are exactly two instances of this remainder. */�  �  �          #        new_value = hash_remainder;�  �  �          &        insert_index = runstart_index;�  �  �          #        operation = 2; /* Insert */�  �  �          G          (hash_remainder == 0 && zero_terminator == runstart_index)) {�  �  �          V          (hash_remainder > 0 && get_slot(qf, runstart_index + 1) > hash_remainder) ||�  �  �          3      } else if (runstart_index == runend_index || �  �  �          @        /* If there's exactly one instance of this remainder. */�  �  �          3           extended) counter for this remainder. */�  �  �          >        /* Cases below here: we're incrementing the (simple or�  ~  �          #        new_value = hash_remainder;�  }            &        insert_index = runstart_index;�  |  ~          &        operation = 2; /* Inserting */�  {  }          7      } else if (current_remainder != hash_remainder) {�  z  |          =           there are larger remainders already in the run. */�  y  {          E        /* This is the first time we're inserting this remainder, but�  w  y          #        new_value = hash_remainder;�  v  x          &        insert_index = runstart_index;�  u  w                  operation = 1;�  t  v          *      if (runstart_index > runend_index) {�  s  u          ;         and it is larger than any remainder in the run. */�  r  t          D      /* If this is the first time we've inserted the new remainder,�  p  r                }�  o  q          9        current_remainder = get_slot(qf, runstart_index);�  n  p                     that case. */�  m  o          E           condition will prevent us from using the invalid result in�  l  n          D        /* This may read past the end of the run, but the while loop�  j  l          	        }�  i  k                    runstart_index++;�  h  j                  } else {�  g  i          4          /* This remainder has a simple counter. */�  e  g                    runstart_index++;�  d  f                      runstart_index++;�  c  e          C          while (get_slot(qf, runstart_index) != current_remainder)�  b  d          .          runstart_index = runstart_index + 2;�  a  c          C            get_slot(qf, runstart_index + 1) < current_remainder) {�  `  b          -        if (runstart_index < runend_index && �  _  a          F        /* If this remainder has an extended counter, skip over it. */�  ^  `          T      while (current_remainder < hash_remainder && runstart_index <= runend_index) {�  ]  _          4      /* Skip over counters for other remainders. */�  [  ]                }�  Z  \          	        }�  Y  [          ;          current_remainder = get_slot(qf, runstart_index);�  X  Z          /          runstart_index = zero_terminator + 1;�  W  Y          "        if (hash_remainder != 0) {�  V  X                     can handle that */�  U  W          E        /* May read past end of run, but that's OK because loop below�  S  U          O        /* Otherwise, exactly one 0 (i.e. zero_terminator == runstart_index) */�  R  T          D          zero_terminator = runstart_index + 1; /* Exactly two 0s */�  Q  S          X        else if (runstart_index < runend_index && get_slot(qf, runstart_index + 1) == 0)�  P  R          7          zero_terminator = t+1; /* Three or more 0s */�  O  Q          7        if (t < runend_index && get_slot(qf, t+1) == 0)�  N  P                    t++;�  M  O          8        while (t < runend_index && get_slot(qf, t) != 0)�  L  N          (        uint64_t t = runstart_index + 1;�  K  M          #      if (current_remainder == 0) {�  J  L          )      /* The counter for 0 is special. */�  H  J          0      uint64_t zero_terminator = runstart_index;�  G  I          @      uint64_t current_remainder = get_slot(qf, runstart_index);�  F  H          =      /* Find the counter for this remainder if it exists. */�  D  F          -    if (is_occupied(qf, hash_bucket_index)) {�  B  D          a    int64_t runstart_index = hash_bucket_index == 0 ? 0 : run_end(qf, hash_bucket_index - 1) + 1;�  @  B          R    /* printf("RUNSTART: %02lx RUNEND: %02lx\n", runstart_index, runend_index); */�  >  @          (    uint64_t new_value = hash_remainder;�  =  ?          -    uint64_t insert_index = runend_index + 1;�  <  >          5    int operation = 0; /* Insert into empty bucket */�  ;  =          
  } else {�  9  ;              qf->noccupied_slots++;�  8  :          4    set_slot(qf, hash_bucket_index, hash_remainder);�  7  9          ]    METADATA_WORD(qf, runends, hash_bucket_index) |= 1ULL << (hash_bucket_block_offset % 64);�  6  8          S  if (might_be_empty(qf, hash_bucket_index) && runend_index == hash_bucket_index) {�  4  6          D  int64_t runend_index             = run_end(qf, hash_bucket_index);�  3  5          J  uint64_t hash_bucket_block_offset = hash_bucket_index % SLOTS_PER_BLOCK;�  2  4          @  uint64_t hash_bucket_index        = hash >> qf->bits_per_slot;�  1  3          H  uint64_t hash_remainder           = hash & BITMASK(qf->bits_per_slot);�  ,  .            return 0;�  *  ,             } while (!is_runend(qf, i-1));�  )  +              i++;�  (  *              }�  '  )                  i++;�  &  (          $      while (get_slot(qf, i) != rem)�  %  '                i += 2;�  $  &          7    if (!is_runend(qf, i) && get_slot(qf, i+1) < rem) {�  "  $                return 1;�  !  #              if (hash_remainder == rem)�     "          #    uint64_t rem = get_slot(qf, i);�    !            do {�                int64_t i = runstart_index;�                }�                  }�              +      runstart_index++; /* Exactly one 0 */�                  } else {�              /      runstart_index += 2; /* Exactly two 0s */�                      return 0;�              ,      if (is_runend(qf, runstart_index + 1))�              7    } else if (get_slot(qf, runstart_index + 1) == 0) {�              6      runstart_index = tmp + 2; /* Three or more 0s */�                      return 0;�              !      if (is_runend(qf, tmp + 1))�              T    if (!is_runend(qf, tmp) && get_slot(qf, tmp) == 0 && get_slot(qf, tmp+1) == 0) {�                    tmp++;�              9    while (!is_runend(qf, tmp) && get_slot(qf, tmp) != 0)�              &    uint64_t tmp = runstart_index + 1;�                    return 0;�  
            &    if (is_runend(qf, runstart_index))�    
                return 1;�    	              if (hash_remainder == 0)�              *  if (get_slot(qf, runstart_index) == 0) {�              S  /* printf("MC RUNSTART: %02lx RUNEND: %02lx\n", runstart_index, runend_index); */�              '    runstart_index = hash_bucket_index;�              )  if (runstart_index < hash_bucket_index)�               ]  int64_t runstart_index = hash_bucket_index == 0 ? 0 : run_end(qf, hash_bucket_index-1) + 1;�  �                 return 0;�  �  �          *  if (!is_occupied(qf, hash_bucket_index))�  �  �          8  int64_t hash_bucket_index = hash >> qf->bits_per_slot;�  �  �          A  uint64_t hash_remainder    = hash & BITMASK(qf->bits_per_slot);�  �  �          k  qf->blocks = (qfblock *)calloc(3*qf->nblocks, sizeof(qfblock) + SLOTS_PER_BLOCK * qf->bits_per_slot / 8);�  �  �          A  qf->blocks = (qfblock *)calloc(3*qf->nblocks, sizeof(qfblock));�  �  �            qf->noccupied_slots = 0;�  �  �            qf->nelts = 0;�  �  �          E  qf->nblocks = (qf->nslots + SLOTS_PER_BLOCK - 1) / SLOTS_PER_BLOCK;�  �  �          "  qf->range <<= qf->bits_per_slot;�  �  �            qf->range = qf->nslots;�  �  �             assert(qf->bits_per_slot > 1);�  �  �          D  assert (BITS_PER_SLOT == 0 || BITS_PER_SLOT == qf->bits_per_slot);�  �  �          >  qf->bits_per_slot = qf->key_remainder_bits + qf->value_bits;�  �  �            }�  �  �              nslots >>= 1;�  �  �              qf->key_remainder_bits--;�  �  �          '    assert(qf->key_remainder_bits > 0);�  �  �            while (nslots > 1) {�  �  �          $  qf->key_remainder_bits = key_bits;�  �  �            qf->value_bits = value_bits;�  �  �            qf->key_bits = key_bits;�  �  �            qf->nslots = nslots;�  �  �          @  assert(popcnt(nslots) == 1); /* nslots must be a power of 2 */�  �  �            }�  �  �              qf_dump_block(qf, i);�  �  �          )  for (i = 0; i < qf->nblocks + 2; i++) {�  �  �                qf->nelts);�  �  �                qf->nblocks,�  �  �            printf("%lu %lu\n",�  �  �            uint64_t i;�  �  �            printf("\n");�  �  �            printf("\n");�  �  �          0    printf("%02x ", get_block(qf, i)->slots[j]);�  �  �          ?  for (j = 0; j < SLOTS_PER_BLOCK * qf->bits_per_slot / 8; j++)�  �  �          1    printf("%02lx ", get_block(qf, i)->slots[j]);�  �  �          '  for (j = 0; j < SLOTS_PER_BLOCK; j++)�  �  �          0    printf("%02x ", get_block(qf, i)->slots[j]);�  �  �          '  for (j = 0; j < SLOTS_PER_BLOCK; j++)�  �  �            printf("\n");�  �  �          Q    printf(" %d ", (get_block(qf, i)->runends[j/64] & (1ULL << (j%64))) ? 1 : 0);�  �  �          '  for (j = 0; j < SLOTS_PER_BLOCK; j++)�  �  �            printf("\n");�  �  �          S    printf(" %d ", (get_block(qf, i)->occupieds[j/64] & (1ULL << (j%64))) ? 1 : 0);�  �  �          '  for (j = 0; j < SLOTS_PER_BLOCK; j++)�  �  �            printf("\n");�  �  �              printf("%02lx ", j);�  �  �          '  for (j = 0; j < SLOTS_PER_BLOCK; j++)�  �  �            printf("\n");�  �  �          -  printf("%-192d", get_block(qf, i)->offset);�  �  �            uint64_t j;�  �  �          ,      (empty_index % SLOTS_PER_BLOCK) % 64);�  �  �          ,      (start_index % SLOTS_PER_BLOCK) % 64, �  �  �          .      METADATA_WORD(qf, runends, empty_index),�  �  �          b  METADATA_WORD(qf, runends, empty_index) =  shift_into_b(METADATA_WORD(qf, runends, start_index),�  �  �            }�  �  �              }�  �  �                empty_index -= 64;�  �  �                    63);�  �  �                    0, �  �  �          2          METADATA_WORD(qf, runends, empty_index),�  �  �          i      METADATA_WORD(qf, runends, empty_index) =	shift_into_b(METADATA_WORD(qf, runends, empty_index-64), �  �  �          1    while(start_index / 64 != empty_index / 64) {�  �  �          *    empty_index -= (empty_index % 64) + 1;�  �  �                  empty_index % 64);�  �  �                  0, �  �  �          0        METADATA_WORD(qf, runends, empty_index),�  �  �          g    METADATA_WORD(qf, runends, empty_index) = shift_into_b(METADATA_WORD(qf, runends, empty_index-64), �  �  �          -  if (start_index / 64 != empty_index / 64) {�  �  �          &    | ((bstart == 0) ? (a >> 63) : 0);�  �  �          5    | ((b & (BITMASK(bend - bstart) << bstart)) << 1)�  �  �          6  return (b & ~(BITMASK(bend - bstart + 1) << bstart))�  �  �          '    set_slot(qf, i, get_slot(qf, i-1));�  �  �          -  for (i = empty_index; i > start_index; i--)�  �  �            int64_t i;�  z  |          F      (empty_offset - start_offset) * sizeof(qf->blocks[0].slots[0]));�  y  {          7      &get_block(qf, empty_block)->slots[start_offset],�  x  z          >  memmove(&get_block(qf, empty_block)->slots[start_offset+1], �  v  x            }�  u  w          %    empty_offset = SLOTS_PER_BLOCK-1;�  t  v              empty_block--;�  s  u          b    get_block(qf, empty_block)->slots[0] = get_block(qf, empty_block-1)->slots[SLOTS_PER_BLOCK-1];�  r  t          7        empty_offset * sizeof(qf->blocks[0].slots[0]));�  q  s          .        &get_block(qf, empty_block)->slots[0],�  p  r          3    memmove(&get_block(qf, empty_block)->slots[1], �  o  q          %  while (start_block < empty_block) {�  m  o          8  uint64_t empty_offset = empty_index % SLOTS_PER_BLOCK;�  l  n          8  uint64_t empty_block  = empty_index / SLOTS_PER_BLOCK;�  k  m          8  uint64_t start_offset = start_index % SLOTS_PER_BLOCK;�  j  l          8  uint64_t start_block  = start_index / SLOTS_PER_BLOCK;�  c  e            return from; �  b  d            } while(1);�  a  c              from = new_from+1;�  `  b                break;�  _  a              if (new_from == from)�  ^  `          !    new_from = run_end(qf, from);�  ]  _                from++;�  \  ^          (    while (!probably_is_empty(qf, from))�  [  ]            do {�  Z  \            uint64_t new_from;�  U  W          "    && !is_runend(qf, slot_index);�  T  V          #    && !is_occupied(qf, slot_index)�  S  U          &  return get_slot(qf, slot_index) == 0�  N  P          "    && !is_runend(qf, slot_index);�  M  O          %  return !is_occupied(qf, slot_index)�  H  J          -    && run_end(qf, slot_index) == slot_index;�  G  I          !    && !is_runend(qf, slot_index)�  F  H          $    && !is_occupied(qf, slot_index) �  E  G          &  return get_slot(qf, slot_index) == 0�  @  B              return runend_index;�  ?  A            else�  >  @              return hash_bucket_index;�  =  ?          '  if (runend_index < hash_bucket_index)�  <  >          U  uint64_t runend_index = SLOTS_PER_BLOCK * runend_block_index + runend_block_offset;�  :  <            }�  9  ;              }�  8  :          7      } while (runend_block_offset == SLOTS_PER_BLOCK);�  7  9          x        // runend_block_offset = bitselect(get_block(qf, runend_block_index)->runends, runend_ignore_bits, runend_rank);�  6  8          y        runend_block_offset = bitselectv(get_block(qf, runend_block_index)->runends[0], runend_ignore_bits, runend_rank);�  5  7                   runend_ignore_bits  = 0;�  4  6                  runend_block_index++;�  3  5          i        runend_rank        -= popcntv(get_block(qf, runend_block_index)->runends[0], runend_ignore_bits);�  2  4          �        // runend_rank        -= popcntv(get_block(qf, runend_block_index)->runends, METADATA_WORDS_PER_BLOCK, runend_ignore_bits);�  1  3          
      do {�  0  2              } else {�  /  1                return hash_bucket_index;�  .  0          ]      /* The block begins in empty space, and this bucket is in that region of empty space */�  -  /          C    if (bucket_blocks_offset == 0 && bucket_intrablock_rank == 0) {�  ,  .          /  if (runend_block_offset == SLOTS_PER_BLOCK) {�  +  -            �  *  ,          |  uint64_t runend_block_offset = bitselectv(get_block(qf, runend_block_index)->runends[0], runend_ignore_bits, runend_rank);�  )  +          �  // uint64_t runend_block_offset = bitselectv(get_block(qf, runend_block_index)->runends, METADATA_WORDS_PER_BLOCK, runend_ignore_bits, runend_rank);�  (  *          <  uint64_t runend_rank         = bucket_intrablock_rank - 1;�  '  )          H  uint64_t runend_ignore_bits  = bucket_blocks_offset % SLOTS_PER_BLOCK;�  &  (          ]  uint64_t runend_block_index  = bucket_block_index + bucket_blocks_offset / SLOTS_PER_BLOCK;�  %  '          p  /* FIXME: Should handle offset overflow  --- Ah screw it, just use 16-bit offset.  That'll never overflow.  */�  #  %            }�  "  $          M      return SLOTS_PER_BLOCK * bucket_block_index + bucket_blocks_offset - 1;�  !  #              else�     "                return hash_bucket_index;�    !          9    if (bucket_blocks_offset <= bucket_intrablock_offset)�               $  if (bucket_intrablock_rank == 0) {�              y  uint64_t bucket_intrablock_rank   = bitrank(get_block(qf, bucket_block_index)->occupieds[0], bucket_intrablock_offset);�              �  // uint64_t bucket_intrablock_rank   = bitrankv(get_block(qf, bucket_block_index)->occupieds, METADATA_WORDS_PER_BLOCK, bucket_intrablock_offset);�              G  uint64_t bucket_blocks_offset = block_offset(qf, bucket_block_index);�              J  uint64_t bucket_intrablock_offset = hash_bucket_index % SLOTS_PER_BLOCK;�              J  uint64_t bucket_block_index       = hash_bucket_index / SLOTS_PER_BLOCK;�              V  return run_end(qf, SLOTS_PER_BLOCK * blockidx - 1) - SLOTS_PER_BLOCK * blockidx + 1;�              +    return get_block(qf, blockidx)->offset;�              P      get_block(qf, blockidx)->offset < BITMASK(8*sizeof(qf->blocks[0].offset)))�              *  if (sizeof(qf->blocks[0].offset > 1) || �              O  /* Don't know why the first condition is there. It will always return true */�                   that field. */�              D     field, then we can safely ignore the possibility of overflowing�  
            A  /* If we have extended counters and a 16-bit (or larger) offset�              	  *p = t;�               	  t |= v;�   �              t &= ~mask;�   �               v <<= shift;�   �   �            mask <<= shift;�   �   �          B  int shift = ((index % SLOTS_PER_BLOCK) * qf->bits_per_slot) % 8;�   �   �            uint64_t v = value;�   �   �          -  uint64_t mask = BITMASK(qf->bits_per_slot);�   �   �            uint64_t t = *p;�   �   �          ~  uint64_t *p = (uint64_t *)&get_block(qf, index / SLOTS_PER_BLOCK)->slots[(index % SLOTS_PER_BLOCK) * qf->bits_per_slot / 8];�   �   �          m  /* Should use __uint128_t to support up to 64-bit remainders, but gcc seems to generate buggy code.  :/  */�   �   �          r  return (uint64_t)(((*p) >> (((index % SLOTS_PER_BLOCK) * qf->bits_per_slot) % 8)) & BITMASK(qf->bits_per_slot));�   �   �          ~  uint64_t *p = (uint64_t *)&get_block(qf, index / SLOTS_PER_BLOCK)->slots[(index % SLOTS_PER_BLOCK) * qf->bits_per_slot / 8];�   �   �          m  /* Should use __uint128_t to support up to 64-bit remainders, but gcc seems to generate buggy code.  :/  */�   �   �          	  *p = t;�   �   �          	  t |= v;�   �   �            t &= ~mask;�   �   �            v <<= shift;�   �   �            mask <<= shift;�   �   �          >  int shift = ((index % SLOTS_PER_BLOCK) * BITS_PER_SLOT) % 8;�   �   �            uint64_t v = value;�   �   �          )  uint64_t mask = BITMASK(BITS_PER_SLOT);�   �   �            uint64_t t = *p;�   �   �          z  uint64_t *p = (uint64_t *)&get_block(qf, index / SLOTS_PER_BLOCK)->slots[(index % SLOTS_PER_BLOCK) * BITS_PER_SLOT / 8];�   �   �          m  /* Should use __uint128_t to support up to 64-bit remainders, but gcc seems to generate buggy code.  :/  */�   �   �          j  return (uint64_t)(((*p) >> (((index % SLOTS_PER_BLOCK) * BITS_PER_SLOT) % 8)) & BITMASK(BITS_PER_SLOT));�   �   �          z  uint64_t *p = (uint64_t *)&get_block(qf, index / SLOTS_PER_BLOCK)->slots[(index % SLOTS_PER_BLOCK) * BITS_PER_SLOT / 8];�   �   �          m  /* Should use __uint128_t to support up to 64-bit remainders, but gcc seems to generate buggy code.  :/  */�   �   �          n  get_block(qf, index / SLOTS_PER_BLOCK)->slots[index % SLOTS_PER_BLOCK] = value & BITMASK(qf->bits_per_slot);�   �   �          P  return get_block(qf, index / SLOTS_PER_BLOCK)->slots[index % SLOTS_PER_BLOCK];�   �   �          Z  return (METADATA_WORD(qf, occupieds, index) >> ((index % SLOTS_PER_BLOCK) % 64)) & 1ULL;�   �   �          X  return (METADATA_WORD(qf, runends, index) >> ((index % SLOTS_PER_BLOCK) % 64)) & 1ULL;�   �   �          w  return (qfblock *)(((char *)qf->blocks) + block_index * (sizeof(qfblock) + SLOTS_PER_BLOCK * qf->bits_per_slot / 8));�   �   �          "  return &qf->blocks[block_index];�   �   �            return 64;�   �   �            }�   �   �          "      return bitselect(val, rank);�   �   �              else�   �   �                rank -= popcnt(val);�   �   �              if (popcnt(val) <= rank)�   �   �          	  else { �   �   �            }�   �   �          :      return bitselect(val & ~BITMASK(ignore % 64), rank);�   �   �              else�   �   �          2      rank -= popcnt(val & ~BITMASK(ignore % 64));�   �   �          4    if (popcnt(val & ~BITMASK(ignore % 64)) <= rank)�   �   �            if (ignore % 64) {�   �   �            return 64 * nvals;�   �   �            }�   �   �              }�   �   �          -      return 64*i + bitselect(vals[i], rank);�   �   �              } else {�   �   �                rank -= popcnt(vals[i]);�   �   �          "    if (popcnt(vals[i]) <= rank) {�   �   �          0  for (i = (ignore + 63) / 64; i < nvals; i++) {�   �   �            }�   �   �          ]      return 64 * (ignore / 64) + bitselect(vals[ignore / 64] & ~BITMASK(ignore % 64), rank);�   �   �              else�   �   �          @      rank -= popcnt(vals[ignore / 64] & ~BITMASK(ignore % 64));�   �   �          B    if (popcnt(vals[ignore / 64] & ~BITMASK(ignore % 64)) <= rank)�   �   �            if (ignore % 64) {�   �   �            int i;�   �   �            return i;�      �                : "cc");�   ~   �                : [bit] "g" (val)�   }                   : [index] "=r" (i)�   |   ~            asm("tzcnt %[bit], %[index]"�   {   }                : [mask] "r" (i));�   z   |                : [val] "+r" (val)�   y   {          $  asm("pdep %[val], %[mask], %[val]"�   x   z            uint64_t i = 1ULL << rank;�   q   s          #  return acc + bitrank(*vals, pos);�   p   r            }�   o   q              vals++;�   n   p              pos -= 64;�   m   o              acc += popcnt(*vals);�   l   n            while (pos > 63) {�   k   m            int acc = 0;�   b   d            return val;�   a   c                : "cc");�   `   b                :�   _   a                : [val] "+r" (val)�   ^   `            asm("popcnt %[val], %[val]"�   ]   _          "  val = val & ((2ULL << pos) - 1);�   W   Y              return popcnt(val);�   V   X            else�   U   W          0    return popcnt (val & ~BITMASK(ignore % 64));�   T   V            if (ignore % 64)�   N   P            return acc;�   M   O              acc += popcnt(vals[i]);�   L   N          .  for (i = (ignore + 63) / 64; i < nvals; i++)�   K   M          >    acc += popcnt (vals[ignore / 64] & ~BITMASK(ignore % 64));�   J   L            if (ignore % 64)�   H   J            int i;�   G   I            int acc = 0;�   A   C            return val;�   @   B                : "cc");�   ?   A                :�   >   @                : [val] "+r" (val)�   =   ?            asm("popcnt %[val], %[val]"�   5   7            qfblock *blocks;�   4   6            uint64_t noccupied_slots;�   3   5            uint64_t nelts;�   2   4            uint64_t nblocks;�   1   3            __uint128_t range;�   0   2            uint64_t bits_per_slot;�   /   1            uint64_t key_remainder_bits;�   .   0            uint64_t value_bits;�   -   /            uint64_t key_bits;�   ,   .            uint64_t nslots;�   '   )            uint8_t   slots[];�   %   '          7  uint8_t   slots[SLOTS_PER_BLOCK * BITS_PER_SLOT / 8];�   #   %          #  uint64_t  slots[SLOTS_PER_BLOCK];�   !   #          #  uint32_t  slots[SLOTS_PER_BLOCK];�      !          #  uint16_t  slots[SLOTS_PER_BLOCK];�                "  uint8_t  slots[SLOTS_PER_BLOCK];�                -  uint64_t runends[METADATA_WORDS_PER_BLOCK];�                /  uint64_t occupieds[METADATA_WORDS_PER_BLOCK];�                p  uint8_t offset; /* Code works with uint16_t, uint32_t, etc, but uint8_t seems just as fast as anything else */�                   */�                R   or other integer <= 56 (for compile-time-optimized bit-shifting-based versions)�                -   8, 16, 32, or 64 (for optimized versions),�                    0 (choose size at run-time), 5��