// /Script/Engine.CurveEdTab
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h

USTRUCT()
struct FCurveEdTab
{
    UPROPERTY() FString TabName;  // 0x0000, size 0x10
    UPROPERTY() TArray<FCurveEdEntry> Curves;  // 0x0010, size 0x10
    UPROPERTY() float ViewStartInput;  // 0x0020, size 0x4
    UPROPERTY() float ViewEndInput;  // 0x0024, size 0x4
    UPROPERTY() float ViewStartOutput;  // 0x0028, size 0x4
    UPROPERTY() float ViewEndOutput;  // 0x002C, size 0x4
};
