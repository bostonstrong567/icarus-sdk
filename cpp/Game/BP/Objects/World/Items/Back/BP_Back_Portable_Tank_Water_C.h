// /Game/BP/Objects/World/Items/Back/BP_Back_Portable_Tank_Water.BP_Back_Portable_Tank_Water_C
// Derives from: ABP_Back_Item_Base_C > AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Back_Portable_Tank_Water_C : public ABP_Back_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Back_Portable_Tank_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
