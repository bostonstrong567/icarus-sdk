// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Central_Scanner.BP_Mission_Central_Scanner_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Central_Scanner_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_Pulse;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ShuttleLand;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipThrusterTakeOff;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_dropshipThruster;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipSonicBoom;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraLandingScene;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraTakeOffScene;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM1;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEnergyComponent* EnergyComponment;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0798, size 0x8
    UPROPERTY() float Timeline_0_Thickness_2E64195142B52197997699AEC21D471A;  // 0x07A0, size 0x4
    UPROPERTY() float Timeline_0_Opacity_2E64195142B52197997699AEC21D471A;  // 0x07A4, size 0x4
    UPROPERTY() float Timeline_0_Radius_2E64195142B52197997699AEC21D471A;  // 0x07A8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_2E64195142B52197997699AEC21D471A;  // 0x07AC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FInteraction Interaction;  // 0x07B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLaunched Launched;  // 0x07C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Activated;  // 0x07D8, size 0x1

    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Central_Scanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Interaction__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Launched__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast) void SetScanLocation(FLinearColor LocationVector);  // parameters 0x10
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__Trigger_Audio__EventFunc();  // named "Timeline_0__Trigger Audio__EventFunc"
    UFUNCTION() void Timeline_0__UpdateFunc();
};
