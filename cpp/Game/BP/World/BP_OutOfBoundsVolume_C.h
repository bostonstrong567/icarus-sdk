// /Game/BP/World/BP_OutOfBoundsVolume.BP_OutOfBoundsVolume_C
// Derives from: AActor > UObject
// size 0x249, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_OutOfBoundsVolume_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> CachedLocations;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool ShowMaterial;  // 0x0248, size 0x1

    UFUNCTION() void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_BP_OutOfBoundsVolume(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ToggleMaterial();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
