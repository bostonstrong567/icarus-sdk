// /Game/BP/Objects/World/Resources/Nodes/BP_OxiteNode.BP_OxiteNode_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x410, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_OxiteNode_C : public ABP_ResourceNodeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Stone3;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Stone2;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Stone1;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Oxite3;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Oxite2;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Oxite1;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Resources;  // 0x0408, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_OxiteNode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
