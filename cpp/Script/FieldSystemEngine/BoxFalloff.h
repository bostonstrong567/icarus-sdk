// /Script/FieldSystemEngine.BoxFalloff
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0x100, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UBoxFalloff : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRange;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRange;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Default;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x00C0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldFalloffType> Falloff;  // 0x00F0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff);  // parameters 0x50
};
