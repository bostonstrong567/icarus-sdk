// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Blocker_Riverlands.BP_Mission_Blocker_Riverlands_C
// Derives from: ABP_Mission_Blocker_Base_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3BC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Blocker_Riverlands_C : public ABP_Mission_Blocker_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh3;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh1;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Played;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x03A4, size 0x18

    UFUNCTION() void BndEvt__BP_Mission_Blocker_Riverlands_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Blocker_Riverlands(int32 EntryPoint);  // parameters 0x4
};
