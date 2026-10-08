// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_Ape_Display_Case.BP_Trophy_Ape_Display_Case_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Ape_Display_Case_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trophy_Ape_Boss_Display_Case_Box;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SW_Ponga_Var2;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SW_Ponga_Var3;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SW_Mushroom_Shelf_A_Var3;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SW_Mushroom_Shelf_A_Var3_2;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Ape_Display_Case(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
