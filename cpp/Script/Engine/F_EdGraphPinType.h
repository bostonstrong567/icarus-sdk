// /Script/Engine.EdGraphPinType
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h

USTRUCT()
struct FEdGraphPinType
{
    UPROPERTY() FName PinCategory;  // 0x0000, size 0x8
    UPROPERTY() FName PinSubCategory;  // 0x0008, size 0x8
    UPROPERTY() TWeakObjectPtr<UObject> PinSubCategoryObject;  // 0x0010, size 0x8
    UPROPERTY() FSimpleMemberReference PinSubCategoryMemberReference;  // 0x0018, size 0x20
    UPROPERTY() FEdGraphTerminalType PinValueType;  // 0x0038, size 0x1C
    UPROPERTY() EPinContainerType ContainerType;  // 0x0054, size 0x1
    UPROPERTY(Deprecated) uint8 bIsArray : 1;  // 0x0055, mask 0x01
    UPROPERTY() uint8 bIsReference : 1;  // 0x0055, mask 0x02
    UPROPERTY() uint8 bIsConst : 1;  // 0x0055, mask 0x04
    UPROPERTY() uint8 bIsWeakPointer : 1;  // 0x0055, mask 0x08
    UPROPERTY() uint8 bIsUObjectWrapper : 1;  // 0x0055, mask 0x10
};
