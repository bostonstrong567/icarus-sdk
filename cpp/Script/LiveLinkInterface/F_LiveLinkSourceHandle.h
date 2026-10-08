// /Script/LiveLinkInterface.LiveLinkSourceHandle
// size 0x18, declared in Engine/Source/Runtime/LiveLinkInterface/Public/ILiveLinkSource.h

USTRUCT()
struct FLiveLinkSourceHandle
{

    // Not reflected:
    TSharedPtr<ILiveLinkSource,0> SourcePointer;  // 0x0008
};
