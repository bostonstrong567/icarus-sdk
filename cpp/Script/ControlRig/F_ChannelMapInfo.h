// /Script/ControlRig.ChannelMapInfo
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Sequencer/MovieSceneControlRigParameterSection.h

USTRUCT()
struct FChannelMapInfo
{
public:
    UPROPERTY() int32 ControlIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 TotalChannelIndex;  // 0x0004, size 0x4
    UPROPERTY() int32 ChannelIndex;  // 0x0008, size 0x4
    UPROPERTY() int32 ParentControlIndex;  // 0x000C, size 0x4
    UPROPERTY() FName ChannelTypeName;  // 0x0010, size 0x8
};
