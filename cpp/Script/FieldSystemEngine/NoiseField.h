// /Script/FieldSystemEngine.NoiseField
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0xF0, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UNoiseField : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRange;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRange;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x00C0, size 0x30

    UFUNCTION(BlueprintCallable, BlueprintPure) UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);  // parameters 0x48
};
