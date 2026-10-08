// /Game/BP/Utilities/WT/BP_WaterfallGenerated.BP_WaterfallGenerated_C
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x3BD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WaterfallGenerated_C : public AWaterBody
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WaterfallAudioComponent_C* WaterfallAudio;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Waterfall;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MeshIndex;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x0354, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* MaterialOverride;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstance*> MaterialOverrideArray;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInCave;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLava;  // 0x0379, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LavaSpeed;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ST_Waterfall_Details Waterfall_Custom_Details;  // 0x0380, size 0x3C, named "Waterfall Custom Details"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseCalmVariant;  // 0x03BC, size 0x1

    UFUNCTION() void BndEvt__BP_WaterfallGenerated_SM_Waterfall_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BP_WaterfallGenerated_SM_Waterfall_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_BP_WaterfallGenerated(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateMaterials();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void Water_Fall_Custom_Details();  // named "Water Fall Custom Details"
};
