// /Game/ASS/ENV/ATM/BP_BiomeOverride.BP_BiomeOverride_C
// Derives from: AActor > UObject
// size 0x249, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BiomeOverride_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* OverrideVolume;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum Biome;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x0248, size 0x1

    UFUNCTION() void BndEvt__OverrideVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__OverrideVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_BP_BiomeOverride(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAtmosphereController(ABP_AtmosphereController_C*& AtmosphereController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
