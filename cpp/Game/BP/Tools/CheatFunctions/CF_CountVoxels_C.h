// /Game/BP/Tools/CheatFunctions/CF_CountVoxels.CF_CountVoxels_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_CountVoxels_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_VoxelRock_C*> AllVoxels;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVoxelSetupDataRowHandle, int32> VoxelMap;  // 0x0308, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_CountVoxels(int32 EntryPoint);  // parameters 0x4
};
