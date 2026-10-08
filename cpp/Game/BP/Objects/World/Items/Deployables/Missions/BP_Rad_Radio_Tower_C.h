// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Rad_Radio_Tower.BP_Rad_Radio_Tower_C
// Derives from: ABP_Deployable_ManualToggle_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rad_Radio_Tower_C : public ABP_Deployable_ManualToggle_Base_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Dish;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Aligned;  // 0x0768, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 Degrees;  // 0x076C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 ZoneDegrees;  // 0x0770, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ZoneHasReachedTarget;  // 0x0774, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ZoneTarget;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZoneSpeed;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Progress;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProgressTemp;  // 0x0784, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x0788, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TempValue;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance MinigameInstance;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UIcarusLinkedActorPanelBase> Widget_Class;  // 0x0798, size 0x8, named "Widget Class"

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Rad_Radio_Tower(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Degrees();
    UFUNCTION(BlueprintCallable) void SetDegrees(int32 NewDegrees);  // parameters 0x4
};
