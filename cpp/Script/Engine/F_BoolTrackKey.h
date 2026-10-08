// /Script/Engine.BoolTrackKey
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackBoolProp.h

USTRUCT()
struct FBoolTrackKey
{
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) uint8 Value : 1;  // 0x0004, mask 0x01
};
