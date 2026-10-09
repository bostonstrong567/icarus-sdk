// /Script/AnimationSharing.TickAnimationSharingFunction
// size 0x30, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingManager.h

USTRUCT()
struct FTickAnimationSharingFunction : public FTickFunction
{
public:
    UAnimationSharingManager * Manager;  // 0x0028, not reflected
};
