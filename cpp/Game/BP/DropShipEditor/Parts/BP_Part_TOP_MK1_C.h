// /Game/BP/DropShipEditor/Parts/BP_Part_TOP_MK1.BP_Part_TOP_MK1_C
// Derives from: ABP_PartBase_C > AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Part_TOP_MK1_C : public ABP_PartBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x05E8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
};
