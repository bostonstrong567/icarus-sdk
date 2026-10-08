// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_ObjectiveList.UMG_GreatHunt_ObjectiveList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_ObjectiveList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ObjectivesList;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Faction_Mission;  // 0x0270, size 0x18, named "Faction Mission"

    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_ObjectiveList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitObjectiveList(FFactionMissionsRowHandle FactionMission);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
