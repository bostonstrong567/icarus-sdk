// /Game/BP/Tools/CheatFunctions/CF_FLODSelectRecord2.CF_FLODSelectRecord2_C
// Derives from: UCF_FLODSelectRecord1_C > UCF_BaseCombo_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_FLODSelectRecord2_C : public UCF_FLODSelectRecord1_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedRecord(UFLODRecord*& SelectedRecord);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHandleExecute(UFLODRecordRow_C* Row);  // parameters 0x8
};
