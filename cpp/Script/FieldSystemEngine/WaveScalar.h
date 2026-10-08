// /Script/FieldSystemEngine.WaveScalar
// Derives from: UFieldNodeFloat > UFieldNodeBase > UActorComponent > UObject
// size 0xD0, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UWaveScalar : public UFieldNodeFloat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x00B4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Wavelength;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Period;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EWaveFunctionType> Function;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldFalloffType> Falloff;  // 0x00C9, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float Wavelength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff);  // parameters 0x28
};
