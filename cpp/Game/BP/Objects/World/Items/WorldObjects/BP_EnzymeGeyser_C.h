// /Game/BP/Objects/World/Items/WorldObjects/BP_EnzymeGeyser.BP_EnzymeGeyser_C
// Derives from: AEnzymeGeyser > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EnzymeGeyser_C : public AEnzymeGeyser, public IDeployableFoundationInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_EruptionBase;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_EruptionTop;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Geyser_01;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* Audio_Eruption;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* Audio_Geyser;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Mist;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0338, size 0x8
    UPROPERTY() float Timeline_1_Float_358402384E5111894982969E0920B36F;  // 0x0340, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_358402384E5111894982969E0920B36F;  // 0x0344, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x0348, size 0x8
    UPROPERTY() float Timeline_0_Float_26493B2345BBE52BA6691B8E5C2FBBC0;  // 0x0350, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_26493B2345BBE52BA6691B8E5C2FBBC0;  // 0x0354, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasAttachedAnalyzer;  // 0x0360, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LocatorMesh;  // 0x0368, size 0x8

    UFUNCTION(BlueprintCallable) void ActivateEruption();
    UFUNCTION(BlueprintCallable) void ActivateEruptionFX();
    UFUNCTION(BlueprintImplementableEvent) void AddAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeactivateEruption();
    UFUNCTION(BlueprintCallable) void DeactivateEruptionFX();
    UFUNCTION(BlueprintCallable) void DebugMaxCompletions();
    UFUNCTION() void ExecuteUbergraph_BP_EnzymeGeyser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideEditorLocator();
    UFUNCTION(BlueprintCallable) void OnRep_HasAttachedAnalyzer();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void RemoveAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResetCompletions();
    UFUNCTION(BlueprintCallable) void ShowEditorLocator();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateAudioState();
    UFUNCTION(BlueprintCallable) void UpdateBiome();
};
