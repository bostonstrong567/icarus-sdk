// /Script/Engine.BlueprintCookedComponentInstancingData
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h

USTRUCT()
struct FBlueprintCookedComponentInstancingData
{
public:
    UPROPERTY() TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;  // 0x0000, size 0x10
    FName ComponentTemplateName;  // 0x0010, not reflected
    UClass * ComponentTemplateClass;  // 0x0018, not reflected
    TEnumAsByte<enum EObjectFlags> ComponentTemplateFlags;  // 0x0020, not reflected
    UPROPERTY() bool bHasValidCookedData;  // 0x0021, size 0x1
private:
    TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32> > CachedPropertyListForSerialization;  // 0x0028, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > CachedPropertyData;  // 0x0038, not reflected
};
