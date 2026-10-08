// /Game/BP/Systems/BP_IcarusWorldSettings.BP_IcarusWorldSettings_C
// Derives from: AIcarusWorldSettings > AWorldSettings > AInfo > AActor > UObject
// size 0x400, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=game)
class ABP_IcarusWorldSettings_C : public AIcarusWorldSettings
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) AActor* AtmosphereController;  // 0x03F8, size 0x8

    UFUNCTION(BlueprintCallable) void CaptureMap();
    UFUNCTION(BlueprintCallable) void CreateAssets();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusWorldSettings(int32 EntryPoint);  // parameters 0x4
};
