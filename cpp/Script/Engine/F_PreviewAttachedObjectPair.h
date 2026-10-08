// /Script/Engine.PreviewAttachedObjectPair
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h

USTRUCT()
struct FPreviewAttachedObjectPair
{
    UPROPERTY() TSoftObjectPtr<UObject> AttachedObject;  // 0x0000, size 0x28
    UPROPERTY(Deprecated) UObject* Object;  // 0x0028, size 0x8
    UPROPERTY() FName AttachedTo;  // 0x0030, size 0x8
};
