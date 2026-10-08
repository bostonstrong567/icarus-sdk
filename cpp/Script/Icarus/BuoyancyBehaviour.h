// /Script/Icarus.BuoyancyBehaviour
// Derives from: UFloatableComponent > UTraitComponent > UActorComponent > UObject
// size 0x118, declared in Icarus/Source/Icarus/Traits/Behaviours/Floatable/BuoyancyBehaviour.h

UCLASS(EditInlineNew, Config=Engine)
class UBuoyancyBehaviour : public UFloatableComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector VelocityDamper;  // 0x00E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBuoyancyEnabled;  // 0x00F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoGenerateFloatingPoints;  // 0x00F5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloatingPointRadius;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> FloatingPoints;  // 0x0100, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float BaseAngularDamping;  // 0x0110, private
    float BaseLinearDamping;  // 0x0114, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float FindWaterHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void GenerateFloatingPoints();

    // Virtual functions that start here:
    //   GenerateFloatingPoints_Implementation
};
