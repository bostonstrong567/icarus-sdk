// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_IM_Cage_Rubble.BP_IM_Cage_Rubble_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IM_Cage_Rubble_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble17;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble16;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble15;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble14;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble13;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble12;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble11;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CageRubble;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble10;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble9;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble8;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble7;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble6;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble5;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble4;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble3;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble2;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Rubble1;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* WallRubble;  // 0x03B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IM_Cage_Rubble(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeRubble();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
