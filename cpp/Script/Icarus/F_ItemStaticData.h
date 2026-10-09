// /Script/Icarus.ItemStaticData
// size 0x488, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FItemStaticData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMeshableRowHandle Meshable;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Itemable;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInteractableRowHandle Interactable;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitableRowHandle Hitable;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEquippableRowHandle Equippable;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFocusableRowHandle Focusable;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHighlightableRowHandle Highlightable;  // 0x00A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FActionableRowHandle Actionable;  // 0x00C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildableRowHandle Buildable;  // 0x00D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FConsumableRowHandle Consumable;  // 0x00F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FUsableRowHandle Usable;  // 0x0108, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCombustibleRowHandle Combustible;  // 0x0120, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDeployableRowHandle Deployable;  // 0x0138, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FArmourRowHandle Armour;  // 0x0150, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBallisticRowHandle Ballistic;  // 0x0168, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFillableRowHandle Fillable;  // 0x0180, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDurableRowHandle Durable;  // 0x0198, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFloatableRowHandle Floatable;  // 0x01B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRocketableRowHandle Rocketable;  // 0x01C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryRowHandle Inventory;  // 0x01E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessingRowHandle Processing;  // 0x01F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FThermalRowHandle Thermal;  // 0x0210, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceRowHandle Experience;  // 0x0228, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlotableRowHandle Slotable;  // 0x0240, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDecayableRowHandle Decayable;  // 0x0258, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFlammableRowHandle Flammable;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransmutableRowHandle Transmutable;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneratorRowHandle Generator;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeightRowHandle Weight;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmableRowHandle Farmable;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryContainerRowHandle InventoryContainer;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemRowHandle LivingItem;  // 0x0300, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourceRowHandle Resource;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FToolDamageRowHandle ToolDamage;  // 0x0330, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAmmoTypesRowHandle AmmoType;  // 0x0348, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemAudioDataRowHandle Audio;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRangedWeaponDataRowHandle RangedWeaponData;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmDataRowHandle FirearmData;  // 0x0390, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFLODDescriptionsRowHandle FLODData;  // 0x03A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTurretRowHandle TurretData;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> AdditionalStats;  // 0x03D8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusAttachmentsRowHandle Attachments;  // 0x0428, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CraftingExperience;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer Manual_Tags;  // 0x0448, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FGameplayTagContainer Generated_Tags;  // 0x0468, size 0x20
};
