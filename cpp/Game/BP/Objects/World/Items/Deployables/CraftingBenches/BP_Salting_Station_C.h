// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Salting_Station.BP_Salting_Station_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x950, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Salting_Station_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_IcarusLinkedActorPanel_C> WidgetClassToOpen;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsEnum> Alterations;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ItemsPerOneSalt;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemToSalt;  // 0x0760, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Salting_Station(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRequiredSalt(int32& RequiredSalt);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasEnoughSalt(bool& EnoughSalt);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasFood(bool& HasFood);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsSalted(bool& Salted);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SaltFood();
};
