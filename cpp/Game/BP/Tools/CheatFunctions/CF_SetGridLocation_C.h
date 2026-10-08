// /Game/BP/Tools/CheatFunctions/CF_SetGridLocation.CF_SetGridLocation_C
// Derives from: UCF_BaseGrid_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_SetGridLocation_C : public UCF_BaseGrid_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8

    UFUNCTION() void ExecuteUbergraph_CF_SetGridLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTeleportLocation(FVector GridLocation, FVector& Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetValidProspectStarts(TArray<FProspectListRowHandle>& ProspectRowHandles);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Handle_Execute(FString Grid, float UV_x, float UV_y);  // parameters 0x18, named "Handle Execute"
    UFUNCTION(BlueprintCallable) void Teleport(FVector NewWorldLocation);  // parameters 0xC
};
