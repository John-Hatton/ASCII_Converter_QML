function IntToASCII(value) {
    switch (value) {
        case 0:
            return "NUL";
        case 1:
            return "SOH";
        case 2:
            return "STX";
        case 3:
            return "ETX";
        case 4:
            return "EOT";
        case 5:
            return "ENQ";
        case 6:
            return "ACK";
        case 7:
            return "BEL";
        case 8:
            return "BS";
        case 9:
            return "TAB";
        case 10:
            return "LF";
        case 11:
            return "VT";
        case 12:
            return "FF";
        case 13:
            return "CR";
        case 14:
            return "SO";
        case 15:
            return "SI";
        case 16:
            return "DLE";
        case 17:
            return "DC1";
        case 18:
            return "DC2";
        case 19:
            return "DC3";
        case 20:
            return "DC4";
        case 21:
            return "NAK";
        case 22:
            return "SYN";
        case 23:
            return "ETB";
        case 24:
            return "CAN";
        case 25:
            return "EM";
        case 26:
            return "SUB";
        case 27:
            return "ESC";
        case 28:
            return "FS";
        case 29:
            return "GS";
        case 30:
            return "RS";
        case 31:
            return "US";
        case 32:
            return "SPACE";
        case 33:
            return "!";
        case 34:
            return "\"";
        case 35:
            return "#";
        case 36:
            return "$";
        case 37:
            return "%";
        case 38:
            return "&";
        case 39:
            return "'";
        case 40:
            return "(";
        case 41:
            return ")";
        case 42:
            return "*";
        case 43:
            return "+";
        case 44:
            return ",";
        case 45:
            return "-";
        case 46:
            return ".";
        case 47:
            return "/";
        case 48:
            return "0";
        case 49:
            return "1";
        case 50:
            return "2";
        case 51:
            return "3";
        case 52:
            return "4";
        case 53:
            return "5";
        case 54:
            return "6";
        case 55:
            return "7";
        case 56:
            return "8";
        case 57:
            return "9";
        case 58:
            return ":";
        case 59:
            return ";";
        case 60:
            return "<";
        case 61:
            return "=";
        case 62:
            return ">";
        case 63:
            return "?";
        case 64:
            return "@";
        case 65:
            return "A";
        case 66:
            return "B";
        case 67:
            return "C";
        case 68:
            return "D";
        case 69:
            return "E";
        case 70:
            return "F";
        case 71:
            return "G";
        case 72:
            return "H";
        case 73:
            return "I";
        case 74:
            return "J";
        case 75:
            return "K";
        case 76:
            return "L";
        case 77:
            return "M";
        case 78:
            return "N";
        case 79:
            return "O";
        case 80:
            return "P";
        case 81:
            return "Q";
        case 82:
            return "R";
        case 83:
            return "S";
        case 84:
            return "T";
        case 85:
            return "U";
        case 86:
            return "V";
        case 87:
            return "W";
        case 88:
            return "X";
        case 89:
            return "Y";
        case 90:
            return "Z";
        case 91:
            return "[";
        case 92:
            return "\\";
        case 93:
            return "]";
        case 94:
            return "^";
        case 95:
            return "_";
        case 96:
            return "`";
        case 97:
            return "a";
        case 98:
            return "b";
        case 99:
            return "c";
        case 100:
            return "d";
        case 101:
            return "e";
        case 102:
            return "f";
        case 103:
            return "g";
        case 104:
            return "h";
        case 105:
            return "i";
        case 106:
            return "j";
        case 107:
            return "k";
        case 108:
            return "l";
        case 109:
            return "m";
        case 110:
            return "n";
        case 111:
            return "o";
        case 112:
            return "p";
        case 113:
            return "q";
        case 114:
            return "r";
        case 115:
            return "s";
        case 116:
            return "t";
        case 117:
            return "u";
        case 118:
            return "v";
        case 119:
            return "w";
        case 120:
            return "x";
        case 121:
            return "y";
        case 122:
            return "z";
        case 123:
            return "{";
        case 124:
            return "|";
        case 125:
            return "}";
        case 126:
            return "~";
        case 127:
            return "DEL";
        default:
            return "Unknown";
    }
}

function ASCIIToInt(value) {
    // Switch statement to match the value with corresponding ASCII integer
    switch(value) {
        case "NUL": return 0;
        case "SOH": return 1;
        case "STX": return 2;
        case "ETX": return 3;
        case "EOT": return 4;
        case "ENQ": return 5;
        case "ACK": return 6;
        case "BEL": return 7;
        case "BS": return 8;
        case "TAB": return 9;
        case "LF": return 10;
        case "VT": return 11;
        case "FF": return 12;
        case "CR": return 13;
        case "SO": return 14;
        case "SI": return 15;
        case "DLE": return 16;
        case "DC1": return 17;
        case "DC2": return 18;
        case "DC3": return 19;
        case "DC4": return 20;
        case "NAK": return 21;
        case "SYN": return 22;
        case "ETB": return 23;
        case "CAN": return 24;
        case "EM": return 25;
        case "SUB": return 26;
        case "ESC": return 27;
        case "FS": return 28;
        case "GS": return 29;
        case "RS": return 30;
        case "US": return 31;
        case "SPACE": return 32;
        case "!": return 33;
        case "\"": return 34;
        case "#": return 35;
        case "$": return 36;
        case "%": return 37;
        case "&": return 38;
        case "'": return 39;
        case "(": return 40;
        case ")": return 41;
        case "*": return 42;
        case "+": return 43;
        case ",": return 44;
        case "-": return 45;
        case ".": return 46;
        case "/": return 47;
        case "0": return 48;
        case "1": return 49;
        case "2": return 50;
        case "3": return 51;
        case "4": return 52;
        case "5": return 53;
        case "6": return 54;
        case "7": return 55;
        case "8": return 56;
        case "9": return 57;
        case ":": return 58;
        case ";": return 59;
        case "<": return 60;
        case "=": return 61;
        case ">": return 62;
        case "?": return 63;
        case "@": return 64;
        case "A": return 65;
        case "B": return 66;
        case "C": return 67;
        case "D": return 68;
        case "E": return 69;
        case "F": return 70;
        case "G": return 71;
        case "H": return 72;
        case "I": return 73;
        case "J": return 74;
        case "K": return 75;
        case "L": return 76;
        case "M": return 77;
        case "N": return 78;
        case "O": return 79;
        case "P": return 80;
        case "Q": return 81;
        case "R": return 82;
        case "S": return 83;
        case "T": return 84;
        case "U": return 85;
        case "V": return 86;
        case "W": return 87;
        case "X": return 88;
        case "Y": return 89;
        case "Z": return 90;
        case "[": return 91;
        case "\\": return 92;
        case "]": return 93;
        case "^": return 94;
        case "_": return 95;
        case "`": return 96;
        case "a": return 97;
        case "b": return 98;
        case "c": return 99;
        case "d": return 100;
        case "e": return 101;
        case "f": return 102;
        case "g": return 103;
        case "h": return 104;
        case "i": return 105;
        case "j": return 106;
        case "k": return 107;
        case "l": return 108;
        case "m": return 109;
        case "n": return 110;
        case "o": return 111;
        case "p": return 112;
        case "q": return 113;
        case "r": return 114;
        case "s": return 115;
        case "t": return 116;
        case "u": return 117;
        case "v": return 118;
        case "w": return 119;
        case "x": return 120;
        case "y": return 121;
        case "z": return 122;
        case "{": return 123;
        case "|": return 124;
        case "}": return 125;
        case "~": return 126;
        case "DEL": return 127;
        default: return -1; // If the input string doesn't match any known character, return -1 as an error indicator.
    }
}