// /Script/FieldSystemEngine.RadialFalloff
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0xD8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class URadialFalloff : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRange;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRange;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Default;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x00C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldFalloffType> Falloff;  // 0x00D0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff);  // parameters 0x30
};
