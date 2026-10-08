// /Game/BP/Objects/World/Items/Deployables/Decorations/Bowls/BP_Pet_Bowl_Water_Base.BP_Pet_Bowl_Water_Base_C
// Derives from: ABP_Water_Trough_Base_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Pet_Bowl_Water_Base_C : public ABP_Water_Trough_Base_C, public IBPI_Bowl_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0798, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 ColorIndex;  // 0x07A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> SupportedColors;  // 0x07A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* NewMaterial;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CurrentColor;  // 0x07C0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Pet_Bowl_Water_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_ColorIndex();
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetBowlColorIndex(int32 ColorIndex);  // parameters 0x4
};
