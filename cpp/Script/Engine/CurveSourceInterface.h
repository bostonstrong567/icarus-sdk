// /Script/Engine.CurveSourceInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/CurveSourceInterface.h

UCLASS(Abstract)
class UCurveSourceInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FName GetBindingName() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) float GetCurveValue(FName CurveName) const;  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void GetCurves(TArray<FNamedCurveValue>& OutValues) const;  // parameters 0x10
};
