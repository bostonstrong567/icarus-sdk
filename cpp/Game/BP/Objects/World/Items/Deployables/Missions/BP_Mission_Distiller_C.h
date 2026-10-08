// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Mission_Distiller.BP_Mission_Distiller_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Distiller_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BunsenBurner_Flame3;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BunsenBurner_Flame2;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BunsenBurner_Flame1;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Bunsen_Burner2;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Bunsen_Burner1;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Bunsen_Burner3;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Flask_LRG_A2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_Flask_LRG_A1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_BeakerStand1;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PRP_BeakerStand;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTagQueriesRowHandle, FAlterationsEnum> Lookup;  // 0x0788, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) FItemData CreateSolution(TArray<FItemData>& Items);  // parameters 0x200
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_StopInteract(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Distiller(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemProperty(const FItemData& Item, FAlterationsEnum& Value);  // parameters 0x200
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_ActiveVFX(bool Active);  // parameters 0x1
};
