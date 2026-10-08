// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Crashed_6.BP_Mission_Crashed_6_C
// Derives from: ABP_Mission_Crashed_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Crashed_6_C : public ABP_Mission_Crashed_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0348, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Crashed_6(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
