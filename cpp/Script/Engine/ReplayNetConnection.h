// /Script/Engine.ReplayNetConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x23A8, declared in Engine/Source/Runtime/Engine/Public/ReplayNetConnection.h

UCLASS(Transient, Config=Engine)
class UReplayNetConnection : public UNetConnection
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FReplayHelper ReplayHelper;  // 0x1BA8, private
    int32 DemoFrameNum;  // 0x2390, private
    FDelegateHandle OnLevelRemovedFromWorldHandle;  // 0x2398, private
    FDelegateHandle OnLevelAddedToWorldHandle;  // 0x23A0, private
};
