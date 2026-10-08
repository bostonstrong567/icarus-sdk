// /Game/BP/Objects/World/Items/WorldObjects/BP_OilGeyser.BP_OilGeyser_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3AA, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_OilGeyser_C : public ABP_WorldObject_C, public IDeployableFoundationInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioOilBubbleLoop;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OilGeyser_Bubbling;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Water;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_EruptionTop;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Geyser_01;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* Audio_Geyser;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Eruption;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* Audio_Eruption;  // 0x0378, size 0x8
    UPROPERTY() float Timeline_1_NewTrack_0_E50171144B0529D0DD71B6B1A2723F99;  // 0x0380, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_E50171144B0529D0DD71B6B1A2723F99;  // 0x0384, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x0388, size 0x8
    UPROPERTY() float Timeline_0_NewTrack_0_B126C8CB4B3D415A71353ABE48D9BCAA;  // 0x0390, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_B126C8CB4B3D415A71353ABE48D9BCAA;  // 0x0394, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LocatorMesh;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bHasPumpJack;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IconActive;  // 0x03A9, size 0x1

    UFUNCTION(BlueprintCallable) void ActivateEruption();
    UFUNCTION(BlueprintCallable) void ActivateEruptionFX();
    UFUNCTION(BlueprintImplementableEvent) void AddAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeactivateEruption();
    UFUNCTION(BlueprintCallable) void DeactivateEruptionFX();
    UFUNCTION() void ExecuteUbergraph_BP_OilGeyser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideEditorLocator();
    UFUNCTION(BlueprintCallable) void OnRep_bHasPumpJack();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void RemoveAttachedDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupMapIcon();
    UFUNCTION(BlueprintCallable) void ShowEditorLocator();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateAudioState();
};
