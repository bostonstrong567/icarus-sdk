// /Script/FullBodyIK.FBIKDebugOption
// size 0x50, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Public/FBIKDebugOption.h

USTRUCT()
struct FFBIKDebugOption
{
    UPROPERTY() bool bDrawDebugHierarchy;  // 0x0000, size 0x1
    UPROPERTY() bool bColorAngularMotionStrength;  // 0x0001, size 0x1
    UPROPERTY() bool bColorLinearMotionStrength;  // 0x0002, size 0x1
    UPROPERTY() bool bDrawDebugAxes;  // 0x0003, size 0x1
    UPROPERTY() bool bDrawDebugEffector;  // 0x0004, size 0x1
    UPROPERTY() bool bDrawDebugConstraints;  // 0x0005, size 0x1
    UPROPERTY() FTransform DrawWorldOffset;  // 0x0010, size 0x30
    UPROPERTY() float DrawSize;  // 0x0040, size 0x4
};
