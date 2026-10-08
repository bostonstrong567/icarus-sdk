// /Game/BP/AI/GOAP/AI/BP_NPC_MammothIceWorldSpawn_Character_Rimetusk.BP_NPC_MammothIceWorldSpawn_Character_Rimetusk_C
// Derives from: ABP_NPC_MammothIceWorldSpawn_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD40, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_MammothIceWorldSpawn_Character_Rimetusk_C : public ABP_NPC_MammothIceWorldSpawn_Character_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D38, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_MammothIceWorldSpawn_Character_Rimetusk(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
