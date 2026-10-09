// /Script/Engine.VectorFieldComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x480, declared in Engine/Source/Runtime/Engine/Classes/Components/VectorFieldComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UVectorField* VectorField;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Intensity;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Tightness;  // 0x045C, size 0x4
    UPROPERTY(Transient) uint8 bPreviewVectorField : 1;  // 0x0460, mask 0x01
    FFXSystemInterface * FXSystem;  // 0x0468, not reflected
    FVectorFieldInstance * VectorFieldInstance;  // 0x0470, not reflected

    UFUNCTION(BlueprintCallable) void SetIntensity(float NewIntensity);  // parameters 0x4

    // Virtual functions that start here:
    //   SetIntensity
};
