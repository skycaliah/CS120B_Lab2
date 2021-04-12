tests = [ {'description': 'PINA: 0x00 => PORTC: 0x04',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 2 } ],
    'expected': [('PORTC',0x04)],
    },
    {'description': 'PINA: 0x01 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 2 } ],
    'expected': [('PORTC',0x03)],
    },
    {'description': 'PINA: 0x02 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 2 } ],
    'expected': [('PORTC',0x03)],
    },

    {'description': 'PINA: 0x03 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 2 } ],
    'expected': [('PORTC',0x02)],
    },
 
    {'description': 'PINA: 0x04 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x04)], 'iterations': 2 } ],
    'expected': [('PORTC',0x03)],
    },
   
    {'description': 'PINA: 0x0E => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0x0E)], 'iterations': 2 } ],
    'expected': [('PORTC',0x01)],
    },
      
    ]
#watch = ['PORTC']

