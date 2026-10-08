// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Crashed_Ship_Base.BP_Mission_Crashed_Ship_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Crashed_Ship_Base_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ShuttleLand;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipThrusterTakeOff;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_dropshipThruster;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipSonicBoom;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraLandingScene;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NiagaraTakeOffScene;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM1;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0780, size 0x8
    UPROPERTY() float TakeOff_DropshipHeight_580D30A74868DC1767C2D48FF1CF29D8;  // 0x0788, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> TakeOff__Direction_580D30A74868DC1767C2D48FF1CF29D8;  // 0x078C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* TakeOff;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FInteraction Interaction;  // 0x0798, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLaunched Launched;  // 0x07A8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Launch;  // 0x07B8, size 0x1

    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Crashed_Ship_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FX_ShuttleGroundDebris(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_SonicBoom(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_ThrusterLand(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void FX_ThrusterTakeOff(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Interaction__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Launched__DelegateSignature();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Play_Audio_Ascend();
    UFUNCTION(BlueprintCallable) void TakeOffShip();
    UFUNCTION() void TakeOff__FinishedFunc();
    UFUNCTION() void TakeOff__GroundDebrisOff__EventFunc();
    UFUNCTION() void TakeOff__GroundDebrisOn__EventFunc();
    UFUNCTION() void TakeOff__ThrusterOn__EventFunc();
    UFUNCTION() void TakeOff__UpdateFunc();
};
