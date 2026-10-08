// /Script/FieldSystemEngine.RadialIntMask
// Derives from: UFieldNodeInt > UFieldNodeBase > UActorComponent > UObject
// size 0xD0, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class URadialIntMask : public UFieldNodeInt
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x00B4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InteriorValue;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExteriorValue;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESetMaskConditionType> SetMaskCondition;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32 InteriorValue, int32 ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);  // parameters 0x28
};
