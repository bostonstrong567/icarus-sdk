// /Script/Engine.BlueprintCookedComponentInstancingData
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h

USTRUCT()
struct FBlueprintCookedComponentInstancingData
{
    UPROPERTY() TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;  // 0x0000, size 0x10
    UPROPERTY() bool bHasValidCookedData;  // 0x0021, size 0x1

    // Not reflected:
    FName ComponentTemplateName;  // 0x0010
    UClass * ComponentTemplateClass;  // 0x0018
    TEnumAsByte<enum EObjectFlags> ComponentTemplateFlags;  // 0x0020
    TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32> > CachedPropertyListForSerialization;  // 0x0028
    TArray<unsigned char,TSizedDefaultAllocator<32> > CachedPropertyData;  // 0x0038
};
