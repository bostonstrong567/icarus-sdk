// /Script/Engine.InterpCurveEdSetup
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h

UCLASS(MinimalAPI)
class UInterpCurveEdSetup : public UObject
{
public:
    UPROPERTY() TArray<FCurveEdTab> Tabs;  // 0x0028, size 0x10
    UPROPERTY() int32 ActiveTab;  // 0x0038, size 0x4
};
