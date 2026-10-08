// /Game/BP/Quests/Styx/E/Expedition/BPQ_STYX_E_Expedition_Travel_Cave.BPQ_STYX_E_Expedition_Travel_Cave_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_E_Expedition_Travel_Cave_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_E_Expedition_Travel_Cave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
