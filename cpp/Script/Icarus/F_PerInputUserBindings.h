// /Script/Icarus.PerInputUserBindings
// size 0x80, declared in Icarus/Source/Icarus/Settings/UserBindings.h

USTRUCT()
struct FPerInputUserBindings
{
    UPROPERTY() FUserBindings Controller;  // 0x0000, size 0x40
    UPROPERTY() FUserBindings Keyboard;  // 0x0040, size 0x40
};
