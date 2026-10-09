// /Script/Engine.ReplayNetConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x23A8, declared in Engine/Source/Runtime/Engine/Public/ReplayNetConnection.h

UCLASS(Transient, Config=Engine)
class UReplayNetConnection : public UNetConnection
{
private:
    FReplayHelper ReplayHelper;  // 0x1BA8, not reflected
    int32 DemoFrameNum;  // 0x2390, not reflected
    FDelegateHandle OnLevelRemovedFromWorldHandle;  // 0x2398, not reflected
    FDelegateHandle OnLevelAddedToWorldHandle;  // 0x23A0, not reflected
};
